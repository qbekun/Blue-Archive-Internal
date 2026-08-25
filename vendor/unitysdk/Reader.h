#pragma once
#include "unitysdk.h"

#define READER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E9840)
#define READER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x91E9850)
#define READER_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x91E9860)
#define READER_CLONE_OFFSET UNITYSDK_OFFSET(0x91E98C0)
#define READER_GETDATA_OFFSET UNITYSDK_OFFSET(0x91E7F00)

	inline static constexpr unsigned int Reader_TypeDefinitionIndex = 24520;

	class Reader : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + READER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READER_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Boolean get_HasInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READER_GET_HASINFO_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + READER_CLONE_OFFSET))(nullptr);
		}

		::System::Object* GetData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + READER_GETDATA_OFFSET))(str, nullptr);
		}

	};

