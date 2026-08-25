#pragma once
#include "unitysdk.h"

class ClanAssistCharEditInfo;

#define UIASSISTSETSLOTGROUP_RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x220BD40)
#define UIASSISTSETSLOTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x220CFD0)
#define UIASSISTSETSLOTGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220B690)
#define UIASSISTSETSLOTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x220D010)

	inline static constexpr unsigned int UIAssistSetSlotGroup_TypeDefinitionIndex = 4356;

	class UIAssistSetSlotGroup : public ::System::Xml::Ucs4Encoding2143
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x28

		::System::Void ResetSelectState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTGROUP_RESETSELECTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTGROUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(ClanAssistCharEditInfo* arg)
		{
			((::System::Void(*)(ClanAssistCharEditInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

	};

