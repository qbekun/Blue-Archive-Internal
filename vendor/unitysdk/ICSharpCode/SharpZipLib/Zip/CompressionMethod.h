#pragma once
#include "../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip { class CompressionMethod; }

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int CompressionMethod_TypeDefinitionIndex = 37110;

	class CompressionMethod : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* Stored; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* Deflated; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* Deflate64; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* BZip2; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* LZMA; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* PPMd; // 0x0
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* WinZipAES; // 0x0

	};
}

