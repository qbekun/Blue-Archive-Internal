#pragma once
#include "unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }

#define SHAPEREDUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94433A0)
#define SHAPEREDUCTION_GETREPRESENTATIVESHAPE_OFFSET UNITYSDK_OFFSET(0x94437D0)

	inline static constexpr unsigned int ShapeReduction_TypeDefinitionIndex = 36887;

	class ShapeReduction : public Il2CppObject
	{
	public:
		Il2CppObject* sourceShapes; // 0x10
		::MXStudio::LipSync::Commons::MouthShape* shape; // 0x18

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEREDUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* GetRepresentativeShape(Il2CppObject* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEREDUCTION_GETREPRESENTATIVESHAPE_OFFSET))(arg, nullptr);
		}

	};

