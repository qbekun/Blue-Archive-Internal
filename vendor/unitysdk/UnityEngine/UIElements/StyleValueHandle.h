#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueType; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0xA41D2A0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0xA41DEB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueHandle_TypeDefinitionIndex = 30653;

	class StyleValueHandle : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleValueType* m_ValueType; // 0x10
		::System::Int32 valueIndex; // 0x14

		::UnityEngine::UIElements::StyleValueType* get_valueType()
		{
			return (return (::UnityEngine::UIElements::StyleValueType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Void set_valueType(::UnityEngine::UIElements::StyleValueType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleValueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_SET_VALUETYPE_OFFSET))(arg, nullptr);
		}

	};
}

