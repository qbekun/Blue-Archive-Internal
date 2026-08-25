#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E6700)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xA0E6810)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_SET_ERROR_OFFSET UNITYSDK_OFFSET(0xA0E6820)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_SHOULDRETRYDOWNLOADERROR_OFFSET UNITYSDK_OFFSET(0xA0E6830)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0xA0E6AF0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_URL_OFFSET UNITYSDK_OFFSET(0xA0E6B00)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E6B10)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA0E6C60)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_METHOD_OFFSET UNITYSDK_OFFSET(0xA0E6C70)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int UnityWebRequestResult_TypeDefinitionIndex = 36385;

	class UnityWebRequestResult : public Il2CppObject
	{
	public:
		::System::String* _Error_k__BackingField; // 0x10
		::System::Int64 _ResponseCode_k__BackingField; // 0x18
		Result* _Result_k__BackingField; // 0x20
		::System::String* _Method_k__BackingField; // 0x28
		::System::String* _Url_k__BackingField; // 0x30

		::System::Void .ctor(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		Result* get_Result()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_SET_ERROR_OFFSET))(str, nullptr);
		}

		::System::Boolean ShouldRetryDownloadError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_SHOULDRETRYDOWNLOADERROR_OFFSET))(nullptr);
		}

		::System::Int64 get_ResponseCode()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_RESPONSECODE_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_URL_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_Error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTRESULT_GET_METHOD_OFFSET))(nullptr);
		}

	};
}

