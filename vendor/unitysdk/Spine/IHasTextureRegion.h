#pragma once
#include "../unitysdk.h"

namespace Spine { class TextureRegion; }
namespace Spine { class Sequence; }

#define SPINE_IHASTEXTUREREGION_GET_G_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_UPDATEREGION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_REGION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_B_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_G_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_A_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_R_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_A_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_REGION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_PATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_R_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IHASTEXTUREREGION_GET_B_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int IHasTextureRegion_TypeDefinitionIndex = 35020;

	class IHasTextureRegion : public Il2CppObject
	{
	public:
		::System::Single get_G()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_G_OFFSET))(nullptr);
		}

		::System::Void UpdateRegion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_UPDATEREGION_OFFSET))(nullptr);
		}

		::System::Void set_Region(::Spine::TextureRegion* arg)
		{
			((::System::Void(*)(::Spine::TextureRegion*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_REGION_OFFSET))(arg, nullptr);
		}

		::System::Void set_B(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_B_OFFSET))(arg, nullptr);
		}

		::System::Void set_G(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_G_OFFSET))(arg, nullptr);
		}

		::System::Void set_A(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_A_OFFSET))(arg, nullptr);
		}

		::System::Single get_R()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_R_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_PATH_OFFSET))(nullptr);
		}

		::System::Single get_A()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_A_OFFSET))(nullptr);
		}

		::Spine::TextureRegion* get_Region()
		{
			return (return (::Spine::TextureRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_REGION_OFFSET))(nullptr);
		}

		::Spine::Sequence* get_Sequence()
		{
			return (return (::Spine::Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Void set_R(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_R_OFFSET))(arg, nullptr);
		}

		::System::Void set_Sequence(::Spine::Sequence* arg)
		{
			((::System::Void(*)(::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_SET_SEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_B()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IHASTEXTUREREGION_GET_B_OFFSET))(nullptr);
		}

	};
}

