#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGPerkExcel; }

#define MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_PERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1E21750)
#define MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_REQUIRES_OFFSET UNITYSDK_OFFSET(0x1E21760)
#define MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E21900)
#define MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E21920)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGPerkGraphNode_TypeDefinitionIndex = 20855;

	class CCGPerkGraphNode : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameCCGPerkExcel* _PerkExcel_k__BackingField; // 0x10

		::MX::Data::Excel::MinigameCCGPerkExcel* get_PerkExcel()
		{
			return (return (::MX::Data::Excel::MinigameCCGPerkExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_PERKEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Requires()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_REQUIRES_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameCCGPerkExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGPerkExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGPERKGRAPHNODE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

