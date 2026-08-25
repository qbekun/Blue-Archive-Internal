#pragma once
#include "unitysdk.h"

#define SEEDGENERATOR_DOGENERATESEED_OFFSET UNITYSDK_OFFSET(0x681A00)
#define SEEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6818B0)
#define SEEDGENERATOR_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x6818C0)
#define SEEDGENERATOR_RUN_OFFSET UNITYSDK_OFFSET(0x681C60)

	inline static constexpr unsigned int SeedGenerator_TypeDefinitionIndex = 22290;

	class SeedGenerator : public Il2CppObject
	{
	public:
		::System::Int32 counter; // 0x10
		::System::Boolean stop; // 0x14

		::Il2CppArray<::System::Object*>* DoGenerateSeed(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SEEDGENERATOR_DOGENERATESEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEEDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSeed(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SEEDGENERATOR_GENERATESEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Run(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SEEDGENERATOR_RUN_OFFSET))(arg, nullptr);
		}

	};

