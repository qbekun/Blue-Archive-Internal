#pragma once
#include "../unitysdk.h"

namespace Spine { class Format; }
namespace Spine { class TextureFilter; }
namespace Spine { class TextureWrap; }
namespace Spine { class AtlasPage; }

#define SPINE_ATLASPAGE_CLONE_OFFSET UNITYSDK_OFFSET(0x95A55A0)
#define SPINE_ATLASPAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A47A0)

namespace Spine
{
	inline static constexpr unsigned int AtlasPage_TypeDefinitionIndex = 35011;

	class AtlasPage : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		::Spine::Format* format; // 0x20
		::Spine::TextureFilter* minFilter; // 0x24
		::Spine::TextureFilter* magFilter; // 0x28
		::Spine::TextureWrap* uWrap; // 0x2C
		::Spine::TextureWrap* vWrap; // 0x30
		::System::Boolean pma; // 0x34
		::System::Object* rendererObject; // 0x38

		::Spine::AtlasPage* Clone()
		{
			return (return (::Spine::AtlasPage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

