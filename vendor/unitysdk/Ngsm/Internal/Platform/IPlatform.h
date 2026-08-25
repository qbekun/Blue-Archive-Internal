#pragma once
#include "../../../unitysdk.h"

namespace Ngsm::Internal::Platform { class EUnityDataType; }

#define NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPEDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_RELEASESECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPEFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPEDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPEFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPEFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPEDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPEFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA55B0)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_CREATESECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPEDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Ngsm::Internal::Platform
{
	inline static constexpr unsigned int IPlatform_TypeDefinitionIndex = 21252;

	class IPlatform : public Il2CppObject
	{
	public:
		::System::Boolean AddSecuDataTypeDouble(::System::Int64 arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPEDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SubSecuDataType(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseSecuDataType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_RELEASESECUDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubSecuDataTypeFloat(::System::Int64 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPEFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddSecuDataType(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetSecuDataTypeDouble(::System::Int64 arg)
		{
			return (return (::System::Double(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPEDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Single GetSecuDataTypeFloat(::System::Int64 arg)
		{
			return (return (::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPEFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetSecuDataTypeFloat(::System::Int64 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPEFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetSecuDataTypeDouble(::System::Int64 arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPEDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddSecuDataTypeFloat(::System::Int64 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_ADDSECUDATATYPEFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 CreateSecuDataType(::Ngsm::Internal::Platform::EUnityDataType* arg)
		{
			return (return (::System::Int64(*)(::Ngsm::Internal::Platform::EUnityDataType*, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_CREATESECUDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetSecuDataType(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_GETSECUDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubSecuDataTypeDouble(::System::Int64 arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SUBSECUDATATYPEDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetSecuDataType(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORM_IPLATFORM_SETSECUDATATYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

