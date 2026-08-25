#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_GLOBALJAVAOBJECTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3B70)
#define UNITYENGINE_GLOBALJAVAOBJECTREF_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1B3C60)
#define UNITYENGINE_GLOBALJAVAOBJECTREF_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1B3DF0)
#define UNITYENGINE_GLOBALJAVAOBJECTREF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B3D20)

namespace UnityEngine
{
	inline static constexpr unsigned int GlobalJavaObjectRef_TypeDefinitionIndex = 37060;

	class GlobalJavaObjectRef : public Il2CppObject
	{
	public:
		::System::Boolean m_disposed; // 0x10
		::System::Int32 m_jobject; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_FINALIZE_OFFSET))(nullptr);
		}

		::System::Int32 op_Implicit(::UnityEngine::GlobalJavaObjectRef* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::GlobalJavaObjectRef*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_DISPOSE_OFFSET))(nullptr);
		}

	};
}

