#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET UNITYSDK_OFFSET(0x94ACEB0)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET UNITYSDK_OFFSET(0x94ACF70)
#define NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x94AD010)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BufferUtils_TypeDefinitionIndex = 31865;

	class BufferUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* RentBuffer(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RENTBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReturnBuffer(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_RETURNBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EnsureBufferSize(Il2CppObject* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BUFFERUTILS_ENSUREBUFFERSIZE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

