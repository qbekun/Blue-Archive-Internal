#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_VISUAL_ICCGDEPENDENCYGRAPHNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_VISUAL_ICCGDEPENDENCYGRAPHNODE_GET_REQUIRES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int ICCGDependencyGraphNode_TypeDefinitionIndex = 21223;

	class ICCGDependencyGraphNode : public Il2CppObject
	{
	public:
		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ICCGDEPENDENCYGRAPHNODE_GET_NODEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Requires()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ICCGDEPENDENCYGRAPHNODE_GET_REQUIRES_OFFSET))(nullptr);
		}

	};
}

