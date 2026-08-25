#pragma once
#include "unitysdk.h"

namespace MX::Data { class UCStageTableInfo; }

#define UNDERCOVERTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x218BA30)
#define UNDERCOVERTASK_COQUIT_OFFSET UNITYSDK_OFFSET(0x218BA40)
#define UNDERCOVERTASK_MOVEENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0x218BAD0)
#define UNDERCOVERTASK_CLEARMEMORY_OFFSET UNITYSDK_OFFSET(0x218BD90)
#define UNDERCOVERTASK_CO_MOVEENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0x218BD00)
#define UNDERCOVERTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x218BE30)
#define UNDERCOVERTASK_QUIT_OFFSET UNITYSDK_OFFSET(0x218BEB0)
#define UNDERCOVERTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x218BFF0)

	inline static constexpr unsigned int UnderCoverTask_TypeDefinitionIndex = 4088;

	class UnderCoverTask : public Il2CppObject
	{
	public:
		Il2CppObject* OnResult; // 0x10
		::System::Action* OnFinish; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoQuit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_COQUIT_OFFSET))(nullptr);
		}

		::System::Void MoveEnteranceScene(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_MOVEENTERANCESCENE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ClearMemory(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_CLEARMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_MoveEnteranceScene(::MX::Data::UCStageTableInfo* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::UCStageTableInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_CO_MOVEENTERANCESCENE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Quit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_QUIT_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDERCOVERTASK_RELEASE_OFFSET))(nullptr);
		}

	};

