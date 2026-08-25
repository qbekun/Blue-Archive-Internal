#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_DEFAULTEXECUTIONORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EAF0)
#define UNITYENGINE_DEFAULTEXECUTIONORDER_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA22E730)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultExecutionOrder_TypeDefinitionIndex = 31141;

	class DefaultExecutionOrder : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 m_Order; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTEXECUTIONORDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTEXECUTIONORDER_GET_ORDER_OFFSET))(nullptr);
		}

	};
}

