#pragma once
#include "unitysdk.h"

#define STEREOCONSTANTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA071970)

	inline static constexpr unsigned int StereoConstants_TypeDefinitionIndex = 32741;

	class StereoConstants : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* viewProjMatrix; // 0x10
		::Il2CppArray<::System::Object*>* invViewMatrix; // 0x18
		::Il2CppArray<::System::Object*>* invProjMatrix; // 0x20
		::Il2CppArray<::System::Object*>* invViewProjMatrix; // 0x28
		::Il2CppArray<::System::Object*>* invCameraProjMatrix; // 0x30
		::Il2CppArray<::System::Object*>* worldSpaceCameraPos; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STEREOCONSTANTS_.CTOR_OFFSET))(nullptr);
		}

	};

