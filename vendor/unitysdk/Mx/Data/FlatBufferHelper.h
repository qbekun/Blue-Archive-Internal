#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FLATBUFFERHELPER_TABLETODICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATBUFFERHELPER_TABLETOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATBUFFERHELPER_EXCELFIELDTOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int FlatBufferHelper_TypeDefinitionIndex = 16494;

	class FlatBufferHelper : public Il2CppObject
	{
	public:
		Il2CppObject* TableToDictionary(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATBUFFERHELPER_TABLETODICTIONARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TableToArray(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATBUFFERHELPER_TABLETOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExcelFieldToArray(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATBUFFERHELPER_EXCELFIELDTOARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

