#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace UnityEngine { class Color; }

#define UISKILLCARDCOSTSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2240510)
#define UISKILLCARDCOSTSET_SETCOSTWIDGETCOUNT_OFFSET UNITYSDK_OFFSET(0x223AB70)
#define UISKILLCARDCOSTSET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x2238A80)
#define UISKILLCARDCOSTSET_SELECTCOSTSET_OFFSET UNITYSDK_OFFSET(0x223A9C0)
#define UISKILLCARDCOSTSET_SETBGCOLOR_OFFSET UNITYSDK_OFFSET(0x223DB20)
#define UISKILLCARDCOSTSET_COSTFXSTOP_OFFSET UNITYSDK_OFFSET(0x223C970)

	inline static constexpr unsigned int UISkillCardCostSet_TypeDefinitionIndex = 4482;

	class UISkillCardCostSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CostSets; // 0x18
		::Il2CppArray<::System::Object*>* CostLabelSets; // 0x20
		::Il2CppArray<::System::Object*>* Bgs; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCostWidgetCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_SETCOSTWIDGETCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCost(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* arg, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_REFRESHCOST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SelectCostSet(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_SELECTCOSTSET_OFFSET))(arg, nullptr);
		}

		::System::Void SetBgColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_SETBGCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void CostFxStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLCARDCOSTSET_COSTFXSTOP_OFFSET))(nullptr);
		}

	};

