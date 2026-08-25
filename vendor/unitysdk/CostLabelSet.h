#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define COSTLABELSET_COSTFXSTOP_OFFSET UNITYSDK_OFFSET(0x2240820)
#define COSTLABELSET_COSTFXDISCOUNT_OFFSET UNITYSDK_OFFSET(0x2240910)
#define COSTLABELSET_COSTFXMAX_OFFSET UNITYSDK_OFFSET(0x2240A60)
#define COSTLABELSET_COSTFXMAXMINUSONE_OFFSET UNITYSDK_OFFSET(0x2240BB0)
#define COSTLABELSET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x2240520)
#define COSTLABELSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2240D00)

	inline static constexpr unsigned int CostLabelSet_TypeDefinitionIndex = 4480;

	class CostLabelSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CostLabels; // 0x10
		::Il2CppArray<::System::Object*>* ToggleObjects; // 0x18
		::Il2CppArray<::System::Object*>* AnimationCostChanged; // 0x20
		::Il2CppArray<::System::Object*>* AnimationCostBeforeMax; // 0x28
		::Il2CppArray<::System::Object*>* AnimationCostAddMax; // 0x30
		::Il2CppArray<::System::Object*>* CostDimObjects; // 0x38

		::System::Void CostFxStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_COSTFXSTOP_OFFSET))(nullptr);
		}

		::System::Void CostFxDiscount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_COSTFXDISCOUNT_OFFSET))(nullptr);
		}

		::System::Void CostFxMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_COSTFXMAX_OFFSET))(nullptr);
		}

		::System::Void CostFxMaxMinusOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_COSTFXMAXMINUSONE_OFFSET))(nullptr);
		}

		::System::Void RefreshCost(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* arg, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg2, ::System::Int32 arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_REFRESHCOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTLABELSET_.CTOR_OFFSET))(nullptr);
		}

	};

