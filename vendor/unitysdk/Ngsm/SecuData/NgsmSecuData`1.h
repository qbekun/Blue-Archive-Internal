#pragma once
#include "../../unitysdk.h"

namespace Ngsm::Internal::Platform { class IPlatform; }
namespace Ngsm::Internal::Platform { class EUnityDataType; }

#define NGSM_SECUDATA_NGSMSECUDATA`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_ADDDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_SUBDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_RELEASEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_SECUDATA_NGSMSECUDATA`1_GET_PLATFORMIMPL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Ngsm::SecuData
{
	inline static constexpr unsigned int NgsmSecuData`1_TypeDefinitionIndex = 21248;

	class NgsmSecuData`1 : public Il2CppObject
	{
	public:
		::System::Int32 INVALID_SECU_KEY; // 0x0
		::System::Int64 m_shandle; // 0x0
		::Ngsm::Internal::Platform::IPlatform* platform; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Ngsm::Internal::Platform::EUnityDataType* arg)
		{
			((::System::Void(*)(::Ngsm::Internal::Platform::EUnityDataType*, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_GETDATA_OFFSET))(nullptr);
		}

		::System::Boolean SetData(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddData(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubData(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_SUBDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_RELEASEDATA_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_DISPOSE_OFFSET))(nullptr);
		}

		::Ngsm::Internal::Platform::IPlatform* get_PlatformImpl()
		{
			return (return (::Ngsm::Internal::Platform::IPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_SECUDATA_NGSMSECUDATA`1_GET_PLATFORMIMPL_OFFSET))(nullptr);
		}

	};
}

