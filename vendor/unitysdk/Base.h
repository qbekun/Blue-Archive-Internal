#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCStage; }
class CoroutineAsyncOperation;

#define BASE_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BASE_CO_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BASE_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD959F0)
#define BASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BASE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD95A00)
#define BASE_INITAILIZE_OFFSET UNITYSDK_OFFSET(0xD95A20)
#define BASE_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xD95A70)
#define BASE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD95AA0)

	inline static constexpr unsigned int Base_TypeDefinitionIndex = 9749;

	class Base : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntity* Owner; // 0x10
		::MXUnderCover::UCStage* stage; // 0x18

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BASE_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Invoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + BASE_CO_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + BASE_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Initailize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + BASE_INITAILIZE_OFFSET))(arg, nullptr);
		}

		::System::Void StartCoroutine(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + BASE_STARTCOROUTINE_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* Invoke(::MXUnderCover::UCEntity* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + BASE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

