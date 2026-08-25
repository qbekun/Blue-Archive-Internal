#pragma once
#include "unitysdk.h"

#define INTERSECTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DB20)

	inline static constexpr unsigned int IntersectNode_TypeDefinitionIndex = 34386;

	class IntersectNode : public Il2CppObject
	{
	public:
		TEdge* Edge1; // 0x10
		TEdge* Edge2; // 0x18
		IntPoint* Pt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERSECTNODE_.CTOR_OFFSET))(nullptr);
		}

	};

