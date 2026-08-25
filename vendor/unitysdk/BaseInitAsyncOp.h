#pragma once
#include "unitysdk.h"

#define BASEINITASYNCOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0xA0EC010)
#define BASEINITASYNCOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0EC070)
#define BASEINITASYNCOP_INIT_OFFSET UNITYSDK_OFFSET(0xA0EC0F0)
#define BASEINITASYNCOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EBE50)

	inline static constexpr unsigned int BaseInitAsyncOp_TypeDefinitionIndex = 36409;

	class BaseInitAsyncOp : public ::FlatData::LimitedStageExcelTable
	{
	public:
		Il2CppObject* m_CallBack; // 0x88

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEINITASYNCOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEINITASYNCOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BASEINITASYNCOP_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEINITASYNCOP_.CTOR_OFFSET))(nullptr);
		}

	};

