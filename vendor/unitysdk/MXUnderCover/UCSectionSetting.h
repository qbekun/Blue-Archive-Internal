#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCDesignLevel; }
namespace MXUnderCover { class UCSectionSetting; }

#define MXUNDERCOVER_UCSECTIONSETTING_GET_SCENE_OFFSET UNITYSDK_OFFSET(0xDAF000)
#define MXUNDERCOVER_UCSECTIONSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0xDBA1F0)
#define MXUNDERCOVER_UCSECTIONSETTING_GET_DESIGNLEVELADDRESSABLEKEY_OFFSET UNITYSDK_OFFSET(0xDAE5A0)
#define MXUNDERCOVER_UCSECTIONSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD9B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSectionSetting_TypeDefinitionIndex = 10003;

	class UCSectionSetting : public Il2CppObject
	{
	public:
		::System::Boolean StartLevel; // 0x10
		::System::String* DesignLevel; // 0x18
		::MXUnderCover::UCDesignLevel* LoadedDesignLevel; // 0x20

		::System::String* get_Scene()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONSETTING_GET_SCENE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXUnderCover::UCSectionSetting* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCSectionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* get_DesignLevelAddressableKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONSETTING_GET_DESIGNLEVELADDRESSABLEKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSECTIONSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

