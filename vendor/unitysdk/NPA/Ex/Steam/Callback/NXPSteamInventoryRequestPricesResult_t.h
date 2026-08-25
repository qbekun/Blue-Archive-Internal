#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamResult; }

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMINVENTORYREQUESTPRICESRESULT_T_GET_M_RGCHCURRENCY_OFFSET UNITYSDK_OFFSET(0x9D3BAA0)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMINVENTORYREQUESTPRICESRESULT_T_SET_M_RGCHCURRENCY_OFFSET UNITYSDK_OFFSET(0x9D3BB60)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamInventoryRequestPricesResult_t_TypeDefinitionIndex = 26095;

	class NXPSteamInventoryRequestPricesResult_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* m_result; // 0x10
		::Il2CppArray<::System::Object*>* m_rgchCurrency_; // 0x18

		::System::String* get_m_rgchCurrency()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMINVENTORYREQUESTPRICESRESULT_T_GET_M_RGCHCURRENCY_OFFSET))(nullptr);
		}

		::System::Void set_m_rgchCurrency(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMINVENTORYREQUESTPRICESRESULT_T_SET_M_RGCHCURRENCY_OFFSET))(str, nullptr);
		}

	};
}

