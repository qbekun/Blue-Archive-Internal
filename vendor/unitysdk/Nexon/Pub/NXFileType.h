#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXFileType; }

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXFileType_TypeDefinitionIndex = 37454;

	class NXFileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Nexon::Pub::NXFileType* NXFileTemp; // 0x0
		::Nexon::Pub::NXFileType* NXFilePatches; // 0x0
		::Nexon::Pub::NXFileType* NXFileResource; // 0x0
		::Nexon::Pub::NXFileType* NXFileStreamingAssets; // 0x0

	};
}

