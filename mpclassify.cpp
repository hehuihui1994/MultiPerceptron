#include "MultiPerceptron.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void print_help() {
    cout << "\nMultiPerceptron classification module\n\n"
        << "usage: mplassify [options] testing_file model_file output_file\n\n"
        << "options: -h        -> help\n"
        << "         -f [0..2] -> 0: only output class label (default)\n"
        << "                   -> 1: output class label with weighted sum (dot product)\n"
        << "                   -> 2: output class label with soft probability\n"
        << endl;
}

void read_parameters(int argc, char *argv[], char *testing_file, char *model_file, 
                        char *output_file, int *output_format) {
    // set default options
    *output_format = 0;
    int i;
    for (i = 1; (i<argc) && (argv[i])[0]=='-'; i++) {
        switch ((argv[i])[1]) {
            case 'h':
                print_help();
                exit(0);
            case 'f':
                *output_format = atoi(argv[++i]);
                break;
            default:
                cout << "Unrecognized option: " << argv[i] << "!" << endl;
                print_help();
                exit(0);
        }
    }
    
    if ((i+2)>=argc) {
        cout << "Not enough parameters!" << endl;
        print_help();
        exit(0);
    }
    strcpy(testing_file, argv[i]);
    strcpy(model_file, argv[i+1]);
    strcpy(output_file, argv[i+2]);
}

int mp_classify(int argc, char *argv[])
{
    char testing_file[200];
    char model_file[200];
    char output_file[200];
    int output_format;
    read_parameters(argc, argv, testing_file, model_file, output_file, &output_format);
    MultiPerceptron mp;
    mp.load_model(model_file);
    float acc = mp.classify_testing_file(testing_file, output_file, output_format);
    cout << "Accuracy: " << acc << endl;
    return 1;
}

int main(int argc, char *argv[])
{
    return mp_classify(argc, argv);
}