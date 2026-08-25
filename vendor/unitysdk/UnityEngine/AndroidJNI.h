#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET UNITYSDK_OFFSET(0xA1C0240)
#define UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0280)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET UNITYSDK_OFFSET(0xA1C02C0)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET UNITYSDK_OFFSET(0xA1C0300)
#define UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET UNITYSDK_OFFSET(0xA1BF020)
#define UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET UNITYSDK_OFFSET(0xA1C0340)
#define UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET UNITYSDK_OFFSET(0xA1B3C20)
#define UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0xA1C0380)
#define UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0xA1B7130)
#define UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0xA1B6F00)
#define UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET UNITYSDK_OFFSET(0xA1B6EC0)
#define UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0xA1C03C0)
#define UNITYENGINE_ANDROIDJNI_ISSAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B6900)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0xA1C0400)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0xA1C0450)
#define UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1C0490)
#define UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET UNITYSDK_OFFSET(0xA1C04E0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0xA1C0530)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0xA1C0580)
#define UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET UNITYSDK_OFFSET(0xA1C05D0)
#define UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET UNITYSDK_OFFSET(0xA1C0610)
#define UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0xA1BB160)
#define UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0650)
#define UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C06A0)
#define UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C06F0)
#define UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0740)
#define UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0790)
#define UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C07E0)
#define UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0830)
#define UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0880)
#define UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C08D0)
#define UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0920)
#define UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0970)
#define UNITYENGINE_ANDROIDJNI_GETSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0xA1C09C0)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0A00)
#define UNITYENGINE_ANDROIDJNI_GETBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0A40)
#define UNITYENGINE_ANDROIDJNI_GETSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0A80)
#define UNITYENGINE_ANDROIDJNI_GETCHARFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0AC0)
#define UNITYENGINE_ANDROIDJNI_GETSHORTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0B00)
#define UNITYENGINE_ANDROIDJNI_GETINTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0B40)
#define UNITYENGINE_ANDROIDJNI_GETLONGFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0B80)
#define UNITYENGINE_ANDROIDJNI_GETFLOATFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0BC0)
#define UNITYENGINE_ANDROIDJNI_GETDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0C00)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0C40)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0C90)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0CE0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0D30)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0D80)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0DD0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0E20)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0E70)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0EC0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0xA1C0F10)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0F60)
#define UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0FA0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0xA1C0FE0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0xA1C1020)
#define UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0xA1C1060)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C10A0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0xA1C10E0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0xA1C1120)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0xA1C1160)
#define UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0xA1C11A0)
#define UNITYENGINE_ANDROIDJNI_CONVERTTOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0xA1C11E0)
#define UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1220)
#define UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1290)
#define UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C12D0)
#define UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1310)
#define UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1350)
#define UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1390)
#define UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0xA1C13D0)
#define UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1410)
#define UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1450)
#define UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1490)
#define UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C14E0)
#define UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1570)
#define UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C15B0)
#define UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C15F0)
#define UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1630)
#define UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1670)
#define UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0xA1C16B0)
#define UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0xA1C16F0)
#define UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1730)
#define UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0xA1C1770)
#define UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0xA1C17B0)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0xA1BDE30)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0xA1C17F0)
#define UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0xA1BDE80)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNI_TypeDefinitionIndex = 37069;

	class AndroidJNI : public Il2CppObject
	{
	public:
		::System::Int32 FindClass(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET))(str, nullptr);
		}

		::System::Int32 FromReflectedMethod(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ExceptionOccurred()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET))(nullptr);
		}

		::System::Void ExceptionClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET))(nullptr);
		}

		::System::Int32 PushLocalFrame(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 PopLocalFrame(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewGlobalRef(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteGlobalRef(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewWeakGlobalRef(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteWeakGlobalRef(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewLocalRef(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteLocalRef(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSameObject(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_ISSAMEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 NewObject(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetObjectClass(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 GetFieldID(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 GetStaticMethodID(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 GetStaticFieldID(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 NewString(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET))(str, nullptr);
		}

		::System::Int32 NewStringFromStr(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET))(str, nullptr);
		}

		::System::String* GetStringChars(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET))(arg, nullptr);
		}

		::System::String* CallStringMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CallObjectMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CallIntMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CallBooleanMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int16 CallShortMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::SByte CallSByteMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char CallCharMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single CallFloatMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double CallDoubleMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 CallLongMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CallVoidMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetStringField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTRINGFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetObjectField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetBooleanField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETBOOLEANFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::SByte GetSByteField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSBYTEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetCharField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETCHARFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 GetShortField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSHORTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetIntField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETINTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetLongField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETLONGFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetFloatField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETFLOATFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetDoubleField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETDOUBLEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::String* CallStaticStringMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CallStaticObjectMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CallStaticIntMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CallStaticBooleanMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int16 CallStaticShortMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::SByte CallStaticSByteMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char CallStaticCharMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single CallStaticFloatMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double CallStaticDoubleMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 CallStaticLongMethod(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetStaticStringField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetStaticObjectField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetStaticBooleanField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::SByte GetStaticSByteField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetStaticCharField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 GetStaticShortField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetStaticIntField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetStaticLongField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetStaticFloatField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetStaticDoubleField(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ConvertToBooleanArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CONVERTTOBOOLEANARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToBooleanArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToSByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToCharArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToShortArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToIntArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToLongArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToFloatArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToDoubleArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToObjectArray(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ToObjectArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBooleanArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromByteArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromSByteArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromCharArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromShortArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromIntArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromLongArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromFloatArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromDoubleArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetArrayLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewObjectArray(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetObjectArrayElement(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetObjectArrayElement(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

