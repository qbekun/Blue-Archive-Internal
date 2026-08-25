#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
namespace MX::Data { class ConquestGroupBonusExcelData; }
namespace MX::Data::Excel { class ConquestGroupBuffExcel; }

#define GROUPBUFFBONUSUI_GETBONUSVALUEPAIR_OFFSET UNITYSDK_OFFSET(0x24E26E0)
#define GROUPBUFFBONUSUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E2740)
#define GROUPBUFFBONUSUI_REFRESHUIFORBUFFTABLE_OFFSET UNITYSDK_OFFSET(0x24E2750)
#define GROUPBUFFBONUSUI_REFRESHUIFORBONUSTABLE_OFFSET UNITYSDK_OFFSET(0x24E2E90)

	inline static constexpr unsigned int GroupBuffBonusUI_TypeDefinitionIndex = 6011;

	class GroupBuffBonusUI : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SchoolSlots; // 0x18
		::UnityEngine::GameObject* BuffBonusOn; // 0x20
		::UnityEngine::GameObject* BuffBonusOff; // 0x28
		UILabel* BuffBonusValueOnLabel; // 0x30
		UILabel* BuffBonusValueOffLabel; // 0x38
		MXButton* BuffBonusDetailButton; // 0x40

		Il2CppObject* GetBonusValuePair(::System::Int32 arg, ::MX::Data::ConquestGroupBonusExcelData* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::MX::Data::ConquestGroupBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBONUSUI_GETBONUSVALUEPAIR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBONUSUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshUIForBuffTable(Il2CppObject* arg, ::System::Int64 arg2, ::MX::Data::Excel::ConquestGroupBuffExcel* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::MX::Data::Excel::ConquestGroupBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBONUSUI_REFRESHUIFORBUFFTABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshUIForBonusTable(::System::Int32 arg, ::MX::Data::ConquestGroupBonusExcelData* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Data::ConquestGroupBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPBUFFBONUSUI_REFRESHUIFORBONUSTABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

