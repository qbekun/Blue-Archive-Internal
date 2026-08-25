#pragma once
#include "unitysdk.h"

class UIPopup_ArenaMapSelect;
class UITexture;
class UILabel;
class ArenaMapContentObject;

#define UIARENAMAPCONTENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21F55E0)
#define UIARENAMAPCONTENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x21F56D0)
#define UIARENAMAPCONTENT_REFRESHELEMENTS_OFFSET UNITYSDK_OFFSET(0x21F5770)
#define UIARENAMAPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F5AB0)

	inline static constexpr unsigned int UIArenaMapContent_TypeDefinitionIndex = 4262;

	class UIArenaMapContent : public Il2CppObject
	{
	public:
		UIPopup_ArenaMapSelect* Root; // 0x18
		UITexture* mapTexture; // 0x20
		UILabel* nameLabel; // 0x28
		::Il2CppArray<::System::Object*>* elements; // 0x30
		ArenaMapContentObject* contentObject; // 0x38

		::System::Void SetData(ArenaMapContentObject* arg)
		{
			((::System::Void(*)(ArenaMapContentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPCONTENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPCONTENT_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPCONTENT_REFRESHELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAMAPCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

