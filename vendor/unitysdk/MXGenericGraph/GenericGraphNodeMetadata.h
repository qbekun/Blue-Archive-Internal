#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MXGENERICGRAPH_GENERICGRAPHNODEMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435AB0)

namespace MXGenericGraph
{
	inline static constexpr unsigned int GenericGraphNodeMetadata_TypeDefinitionIndex = 38111;

	class GenericGraphNodeMetadata : public Il2CppObject
	{
	public:
		::System::Boolean IsSet; // 0x10
		::UnityEngine::Vector2* Position; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXGENERICGRAPH_GENERICGRAPHNODEMETADATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

