#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }

#define IDCONTENTTYPEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1975A80)
#define IDCONTENTTYPEPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1979CB0)
#define IDCONTENTTYPEPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1979CF0)
#define IDCONTENTTYPEPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1979CD0)
#define IDCONTENTTYPEPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1979D10)
#define IDCONTENTTYPEPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1979D90)

	inline static constexpr unsigned int IdContentTypePair_TypeDefinitionIndex = 16465;

	class IdContentTypePair : public Il2CppObject
	{
	public:
		::FlatData::ContentType* ContentType; // 0x10
		::System::Int64 Id; // 0x18

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(IdContentTypePair* arg, IdContentTypePair* arg)
		{
			return (return (::System::Boolean(*)(IdContentTypePair*, IdContentTypePair*, ::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(IdContentTypePair* arg, IdContentTypePair* arg)
		{
			return (return (::System::Boolean(*)(IdContentTypePair*, IdContentTypePair*, ::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(IdContentTypePair* arg)
		{
			return (return (::System::Boolean(*)(IdContentTypePair*, ::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCONTENTTYPEPAIR_GETHASHCODE_OFFSET))(nullptr);
		}

	};

