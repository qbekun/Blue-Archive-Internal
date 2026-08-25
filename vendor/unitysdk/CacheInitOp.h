#pragma once
#include "unitysdk.h"

#define CACHEINITOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E1B420)
#define CACHEINITOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E1B4B0)
#define CACHEINITOP_INIT_OFFSET UNITYSDK_OFFSET(0x9E1B500)
#define CACHEINITOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E1B520)
#define CACHEINITOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E1B5C0)

	inline static constexpr unsigned int CacheInitOp_TypeDefinitionIndex = 36228;

	class CacheInitOp : public ::FlatData::LimitedStageExcelTable
	{
	public:
		Il2CppObject* m_Callback; // 0x88
		::System::Boolean m_UpdateRequired; // 0x90

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEINITOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEINITOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEINITOP_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEINITOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CACHEINITOP_UPDATE_OFFSET))(arg, nullptr);
		}

	};

