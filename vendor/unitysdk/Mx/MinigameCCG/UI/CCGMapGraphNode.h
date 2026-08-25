#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel; }

#define MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_REQUIRES_OFFSET UNITYSDK_OFFSET(0x1E04F50)
#define MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_NODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1E050F0)
#define MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E05100)
#define MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E05120)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGMapGraphNode_TypeDefinitionIndex = 20764;

	class CCGMapGraphNode : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameCCGLevelNodeExcel* _NodeExcel_k__BackingField; // 0x10

		Il2CppObject* get_Requires()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_REQUIRES_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelNodeExcel* get_NodeExcel()
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelNodeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_NODEEXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameCCGLevelNodeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGLevelNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGMAPGRAPHNODE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

