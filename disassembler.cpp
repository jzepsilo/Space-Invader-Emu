class Disassembler {
    public:
        Disassembler();
    
        char* memory_buffer = new char[];
        void readRom();
};