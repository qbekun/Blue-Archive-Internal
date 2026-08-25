#pragma once
#include "../unitysdk.h"

#define SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93BCBC0)
#define SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x93BCBD0)
#define SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BCC60)
#define SYSTEM_MULTICASTDELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BCD80)
#define SYSTEM_MULTICASTDELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x93BCE00)
#define SYSTEM_MULTICASTDELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x93BCE60)
#define SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x93BCF30)
#define SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x93BD290)
#define SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x93BD3D0)

namespace System
{
	inline static constexpr unsigned int MulticastDelegate_TypeDefinitionIndex = 23983;

	class MulticastDelegate : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* delegates; // 0x78

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETMETHODIMPL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInvocationList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETINVOCATIONLIST_OFFSET))(nullptr);
		}

		::System::Delegate* CombineImpl(::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* arg)
		{
			return (return (::System::Delegate*(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET))(arg, nullptr);
		}

	};
}

