#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCPREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB39E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPreference_TypeDefinitionIndex = 9967;

	class UCPreference : public Il2CppObject
	{
	public:
		::System::String* UCAddresableDirectory; // 0x0
		::System::String* EnteranceScene; // 0x0
		::System::String* ArtLevelDirectory; // 0x0
		::System::String* NPCPrefabDirectory; // 0x0
		::System::String* PlayerPrefabDirectory; // 0x0
		::System::String* PropPrefabDirectory; // 0x0
		::System::String* StageRootDirectory; // 0x0
		::System::String* InvenRootDirectory; // 0x0
		::System::String* EffectDirectory; // 0x0
		::System::String* EntityEffectDirectory; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

