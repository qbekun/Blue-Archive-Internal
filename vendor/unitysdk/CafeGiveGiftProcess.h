#pragma once
#include "unitysdk.h"

class CafeCharacter;

#define CAFEGIVEGIFTPROCESS_ONSTARTGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x19BE600)
#define CAFEGIVEGIFTPROCESS_SET_SELECTEDITEMSERVERID_OFFSET UNITYSDK_OFFSET(0x19BE610)
#define CAFEGIVEGIFTPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x19BE620)
#define CAFEGIVEGIFTPROCESS_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x19BE630)
#define CAFEGIVEGIFTPROCESS_ONTOUCHEND_OFFSET UNITYSDK_OFFSET(0x19BE640)
#define CAFEGIVEGIFTPROCESS_CANCELPROCESS_OFFSET UNITYSDK_OFFSET(0x19BE950)
#define CAFEGIVEGIFTPROCESS_GET_SELECTEDITEMSERVERID_OFFSET UNITYSDK_OFFSET(0x19BE970)
#define CAFEGIVEGIFTPROCESS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19BE930)
#define CAFEGIVEGIFTPROCESS_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x19BE980)

	inline static constexpr unsigned int CafeGiveGiftProcess_TypeDefinitionIndex = 1367;

	class CafeGiveGiftProcess : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedItemServerId_k__BackingField; // 0x10
		::System::Boolean _IsStarted_k__BackingField; // 0x18

		::System::Void OnStartGiveGiftProcess(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_ONSTARTGIVEGIFTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedItemServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_SET_SELECTEDITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_GET_ISSTARTED_OFFSET))(nullptr);
		}

		::System::Void OnTouchEnd(CafeCharacter* arg)
		{
			((::System::Void(*)(CafeCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_ONTOUCHEND_OFFSET))(arg, nullptr);
		}

		::System::Void CancelProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_CANCELPROCESS_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedItemServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_GET_SELECTEDITEMSERVERID_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_IsStarted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTPROCESS_SET_ISSTARTED_OFFSET))(arg, nullptr);
		}

	};

