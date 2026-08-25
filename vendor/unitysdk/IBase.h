#pragma once
#include "unitysdk.h"

class CoroutineAsyncOperation;
namespace MXUnderCover { class UCEntity; }

#define IBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IBASE_INITAILIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IBase_TypeDefinitionIndex = 9748;

	class IBase : public Il2CppObject
	{
	public:
		CoroutineAsyncOperation* Invoke(::MXUnderCover::UCEntity* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + IBASE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Initailize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + IBASE_INITAILIZE_OFFSET))(arg, nullptr);
		}

	};

