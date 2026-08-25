#pragma once
#include "unitysdk.h"

class TutorialTask;
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define <>C__DISPLAYCLASS147_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x203F470)
#define <>C__DISPLAYCLASS147_0__SYNCTUTORIALSETCOMPLETIONIDS_B__0_OFFSET UNITYSDK_OFFSET(0x20439B0)

	inline static constexpr unsigned int <>c__DisplayClass147_0_TypeDefinitionIndex = 3254;

	class <>c__DisplayClass147_0 : public Il2CppObject
	{
	public:
		TutorialTask* __4__this; // 0x10
		::System::Boolean afterSetting; // 0x18
		::System::Action* callBack; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS147_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SyncTutorialSetCompletionIds_b__0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS147_0__SYNCTUTORIALSETCOMPLETIONIDS_B__0_OFFSET))(arg, nullptr);
		}

	};

