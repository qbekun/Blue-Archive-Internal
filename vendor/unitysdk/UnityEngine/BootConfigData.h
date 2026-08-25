#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class BootConfigData; }

#define UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xA1E4390)
#define UNITYENGINE_BOOTCONFIGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E43F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BootConfigData_TypeDefinitionIndex = 30949;

	class BootConfigData : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::UnityEngine::BootConfigData* WrapBootConfigData(::System::Int32 arg)
		{
			return (return (::UnityEngine::BootConfigData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

