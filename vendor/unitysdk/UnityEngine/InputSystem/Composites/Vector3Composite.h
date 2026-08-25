#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8D160)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8D1A0)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector3Composite_TypeDefinitionIndex = 28974;

	class Vector3Composite : public ::MX::MinigameCCG::ParameterDecl::Boolean
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C
		::System::Int32 forward; // 0x20
		::System::Int32 backward; // 0x24
		Mode* mode; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET))(arg, nullptr);
		}

	};
}

