#pragma once
#include "unitysdk.h"

class CameraFindType;

#define CAMERACONFIGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20CF730)

	inline static constexpr unsigned int CameraConfigData_TypeDefinitionIndex = 3696;

	class CameraConfigData : public Il2CppObject
	{
	public:
		CameraFindType* CameraFindMode; // 0x18
		::System::Boolean SetClipPlane; // 0x1C
		::System::Single NearClipPlane; // 0x20
		::System::Single FarClipPlane; // 0x24
		::System::Boolean SetFieldOfView; // 0x28
		::System::Single FieldOfView; // 0x2C
		::System::Boolean SetPostProcess; // 0x30
		::System::Boolean EnablePostProcess; // 0x31
		::System::Boolean SetRenderer; // 0x32
		::System::Int32 overrideRenderer; // 0x34
		::System::Boolean SetShadowModifier; // 0x38
		::System::Boolean EnableShadowModifier; // 0x39
		::System::Single MaxScale; // 0x3C
		::System::Single Weight; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGDATA_.CTOR_OFFSET))(nullptr);
		}

	};

