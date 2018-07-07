namespace  CONFIG {


    enum eRenderer {
        VULKAN = 0x00,
        OPENGL = 0x01,
        DIRECTX = 0x02
    };

    class cRender {
        public:
        const eRenderer rendererChoice;
    };
};