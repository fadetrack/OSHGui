#ifndef OSHGUI_DRAWING_FONTDX11_H_
#define OSHGUI_DRAWING_FONTDX11_H_

#include <d3dx11.h>

#include "IFont.hpp"

namespace OSHGui
{
	namespace Drawing
	{
		class FontDX11 : public IFont
		{
		public:
			FontDX11(ID3D11Device *device);
			~FontDX11();

			LPD3DX11FONT GetFont();

			virtual bool Create(const Misc::UnicodeString &fontName, int size, bool bold, bool italic);
			
		private:
			ID3D11Device *device;
			LPD3DX11FONT font;
		};
	}
}

#endif