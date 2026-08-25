#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x972DC70)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x972DC80)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_EXITSCOPE_OFFSET UNITYSDK_OFFSET(0x972DD80)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x972DD90)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x972DDA0)

namespace System::Data
{
	inline static constexpr unsigned int DataCommonEventSource_TypeDefinitionIndex = 32193;

	class DataCommonEventSource : public Il2CppObject
	{
	public:
		::System::Data::DataCommonEventSource* Log; // 0x0
		::System::Int64 s_nextScopeId; // 0x8

		::System::Void Trace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Trace(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 EnterScope(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(str, nullptr);
		}

		::System::Int64 EnterScope(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(str, arg, nullptr);
		}

		::System::Int64 EnterScope(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int64 EnterScope(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int64 EnterScope(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ExitScope(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_EXITSCOPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

