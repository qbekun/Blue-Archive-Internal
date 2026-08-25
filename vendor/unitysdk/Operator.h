#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define OPERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD95B30)
#define OPERATOR_INITAILIZE_OFFSET UNITYSDK_OFFSET(0xD95BC0)
#define OPERATOR_CO_INVOKE_OFFSET UNITYSDK_OFFSET(0xD95CE0)
#define OPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xD95D90)

	inline static constexpr unsigned int Operator_TypeDefinitionIndex = 9752;

	class Operator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Actions; // 0x20

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPERATOR_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Initailize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + OPERATOR_INITAILIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Invoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + OPERATOR_CO_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPERATOR_.CTOR_OFFSET))(nullptr);
		}

	};

