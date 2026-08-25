#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class TransformOrigin; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class TransformData; }
namespace UnityEngine::UIElements { class TransformData&; }

#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA41A800)
#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA41A830)
#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA41A860)
#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41AA70)
#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41AB10)
#define UNITYENGINE_UIELEMENTS_TRANSFORMDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41AC10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransformData_TypeDefinitionIndex = 30636;

	class TransformData : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Rotate* rotate; // 0x10
		::UnityEngine::UIElements::Scale* scale; // 0x28
		::UnityEngine::UIElements::TransformOrigin* transformOrigin; // 0x38
		::UnityEngine::UIElements::Translate* translate; // 0x4C

		::UnityEngine::UIElements::TransformData* Copy()
		{
			return (return (::UnityEngine::UIElements::TransformData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::TransformData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TransformData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TransformData* arg, ::UnityEngine::UIElements::TransformData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformData*, ::UnityEngine::UIElements::TransformData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TransformData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

