#pragma once
#include "unitysdk.h"

#define DEFAULTENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91776F0)
#define DEFAULTENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9177C70)
#define DEFAULTENCODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x9178010)
#define DEFAULTENCODER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91780E0)
#define DEFAULTENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9178180)
#define DEFAULTENCODER_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x91781B0)
#define DEFAULTENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x91781E0)
#define DEFAULTENCODER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9178230)

	inline static constexpr unsigned int DefaultEncoder_TypeDefinitionIndex = 24263;

	class DefaultEncoder : public Il2CppObject
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_hasInitializedEncoding; // 0x28
		::System::Char charLeftOver; // 0x2A

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_GETBYTECOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTENCODER_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

