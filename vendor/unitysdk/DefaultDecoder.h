#pragma once
#include "unitysdk.h"

#define DEFAULTDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9177410)
#define DEFAULTDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9178270)
#define DEFAULTDECODER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x91785A0)
#define DEFAULTDECODER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9178600)
#define DEFAULTDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x91786A0)
#define DEFAULTDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x91786D0)
#define DEFAULTDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9178700)
#define DEFAULTDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9178730)
#define DEFAULTDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9178770)
#define DEFAULTDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x91787C0)

	inline static constexpr unsigned int DefaultDecoder_TypeDefinitionIndex = 24264;

	class DefaultDecoder : public Il2CppObject
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_hasInitializedEncoding; // 0x28

		::System::Void .ctor(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTDECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

