#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CAFECAMERASAVEDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1D00910)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_SET_Z_OFFSET UNITYSDK_OFFSET(0x1D00920)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D00930)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00940)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1D00950)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D00960)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_GET_ZOOMVALUE_OFFSET UNITYSDK_OFFSET(0x1D00970)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_SET_ZOOMVALUE_OFFSET UNITYSDK_OFFSET(0x1D00980)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D00990)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_GET_Z_OFFSET UNITYSDK_OFFSET(0x1D009B0)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_SET_POSVALUE_OFFSET UNITYSDK_OFFSET(0x1D009C0)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_GET_POSVALUE_OFFSET UNITYSDK_OFFSET(0x1D009D0)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D009E0)
#define MX_SAVEDATA_CAFECAMERASAVEDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D00A30)

namespace MX::SaveData
{
	inline static constexpr unsigned int CafeCameraSaveData_TypeDefinitionIndex = 19969;

	class CafeCameraSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* _ZoomValue_k__BackingField; // 0x10
		Il2CppObject* _PosValue_k__BackingField; // 0x18
		::System::Single _X_k__BackingField; // 0x1C
		::System::Single _Y_k__BackingField; // 0x20
		::System::Single _Z_k__BackingField; // 0x24

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Void set_Z(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SET_Z_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_GET_Y_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_GET_X_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ZoomValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_GET_ZOOMVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ZoomValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SET_ZOOMVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Single get_Z()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_GET_Z_OFFSET))(nullptr);
		}

		::System::Void set_PosValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SET_POSVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PosValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_GET_POSVALUE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFECAMERASAVEDATA_SET_Y_OFFSET))(arg, nullptr);
		}

	};
}

