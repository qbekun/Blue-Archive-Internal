#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonType; }

#define CONTAINERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95462C0)

	inline static constexpr unsigned int ContainerContext_TypeDefinitionIndex = 32130;

	class ContainerContext : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonType* Type; // 0x10
		::System::Int32 Length; // 0x14
		::System::Int32 Position; // 0x18

		::System::Void .ctor(::Newtonsoft::Json::Bson::BsonType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINERCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

