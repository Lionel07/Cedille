#pragma once
#include <kernel/log.h>
#include <stdint.h>

class x86TextModeLog : public KernelLogImpl {
   private:
    int x = 0;
    int y = 0;

    const uintptr_t baseAddr = 0xC03FF000;

    uint8_t* buffer = (uint8_t*)baseAddr;

    char foreColor = 0xF;
    char backColor = 0x0;

    void DrawChar(int xpos, int ypos, char c, char fore, char back);
    void Scroll();

   public:
    virtual void Init();
    virtual void Clear();
    virtual void Newline();
    virtual void ChangeForegroundColor(unsigned char c);
    virtual void ChangeBackgroundColor(unsigned char c);
    virtual void Print(char c);
    virtual void Scroll(int linesDown);
};